HTMLElement.prototype.getClasses = function() {
  var classes = _.filter(this.className.split(' '), function(className) {
    return !!className && className != '';
  });
  return classes;
}

HTMLElement.prototype.addClass = function(newClass) {
  var classes = this.getClasses();
  if (!_.has(classes, newClass)) {
    classes.push(newClass);
  }
  this.className = classes.join(' ');
  return this;
};

HTMLElement.prototype.removeClass = function(targetClass) {
  var classes = this.getClasses();
  classes = _.filter(classes, function(existingClass) {
    return existingClass != targetClass;
  });
  this.className = classes.join(' ');
  return this;
};

window.addEventListener('load', function() {
  // 1. 사이드바, 상단 네비바의 영문 메뉴명을 한글로 변경.
  var menuTitleMap = {
    "Get Track ID": "광고단위 ID 발급받기",
    "Install SDK": "SDK 설치하기",
    "Request IDFA": "IDFA 추적 권한 요청",
    "Project Setting": "프로젝트 설정",
    "Start Event Tracker": "트랙 ID 설정 및 이벤트 트래커 활성화",
    "Send Complete Register Event": "회원가입 이벤트 전송",
    "Send View Cart Event": "장바구니 보기 이벤트 전송",
    "Send View Content Event": "콘텐츠 / 상품 조회 이벤트 전송",
    "Send Search Event": "검색 이벤트 전송",
    "Send Purchase Event": "구매 이벤트 전송",
    "Send Participation Event": "잠재고객 이벤트 전송",
    "Send SignUp Event": "서비스신청 이벤트 전송",
    "Send Add To Cart Event": "장바구니 추가 이벤트 전송",
    "Send Add To Wishlist Event": "관심상품 추가 이벤트 전송"
  };
  var elems = document.querySelectorAll('.navigation a, .doc_title');
  elems.forEach(function(elem) {
    if (!!menuTitleMap[elem.innerHTML]) {
      elem.innerHTML = menuTitleMap[elem.innerHTML];
    }
  });

  // 2. 섹션명이 Documentation인 경우 섹션명 숨김.
  var sectionNameElem = document.querySelector('h1.section_name');
  if (!!sectionNameElem && sectionNameElem.innerHTML === 'Documentation') {
    sectionNameElem.style.display = 'none';
  }

  // 3. swift, objective-c 샘플 코드를 탭 UI로 변환.  
  var tabTitles = document.querySelectorAll('.tab-title');
  var tabItems = _.map(tabTitles, function(titleElem) {
    return {
      title: titleElem,
      code: titleElem.nextElementSibling,
    };
  });
  var tabGroups = _.groupBy(tabItems, function(item) {
    return item.title.getAttribute('data-tab-name');
  });
  
  _.each(tabGroups, function(group) {
    var firstElem = _.first(group).title;
    if (!!firstElem) {
      var tabPane = document.createElement('div').addClass('tab-pane');
      var tabBar = document.createElement('div').addClass('tab-bar');
      tabPane.appendChild(tabBar);
      firstElem.parentNode.insertBefore(tabPane, firstElem);
      _.each(group, function(item, index) {
        selectTabIndex(group, 0);
        item.title.addEventListener('click', function() {
          selectTabIndex(group, index);
        });
        tabBar.appendChild(item.title);
        tabPane.appendChild(item.code);
        selectTabIndex(0);
      });
    }
  });

  function selectTabIndex(tabGroup, targetIndex) {
    _.each(tabGroup, function(item, index) {
      if (index == targetIndex) {
        item.title.removeClass('inactive');
        item.code.style.display = 'block';
      } else {
        item.title.addClass('inactive');
        item.code.style.display = 'none';
      }
    });
  };
});