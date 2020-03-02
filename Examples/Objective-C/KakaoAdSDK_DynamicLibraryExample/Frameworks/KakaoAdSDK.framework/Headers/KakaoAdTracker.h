//
//  KakaoAdTracker.h
//  KakaoChip-Objc
//
//  Created by dwkim on 2017. 12. 3..
//  Copyright © 2017년 KAKAO. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KakaoAdDetailProduct;

/**
 이벤트 수집을 위한 기본 클래스
 설치, 실행, 가입 완료, 장바구니 보기, 검색, 구매, 앱내 구매에 대한 이벤트를 이벤트 수집서버로 전송할 수 있습니다.
 설치, 실행, 앱내 구매에 대한 이벤트는 이벤트 발생시 자동으로 이벤트 서버로 이벤트가 전송 됩니다.
 */
@interface KakaoAdTracker : NSObject

/**
 * 광고계정별로 고유한 식별값.
 * trackId 를 설정하지 않을 경우 이벤트 수집은 이루어지지 않습니다.
 */
@property (class, strong) NSString* trackId;
/**
 이벤트 트래커 활성화
 */
+ (void)activate;
/**
 장바구니 보기 이벤트
 @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
 */
+ (void)sendViewCartEventWithTag:(NSString*)tag NS_SWIFT_NAME(sendViewCartEvent(tag:));
/**
 가입 완료 이벤트
 @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
 */
+ (void)sendCompleteRegisterEventWithTag:(NSString*)tag NS_SWIFT_NAME(sendCompleteRegisterEvent(tag:));
/**
 콘텐츠/상품 조회 이벤트
 @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
 @param contentId 콘텐츠/상품 코드
 */
+ (void)sendViewContentEventWithTag:(NSString*)tag contentId:(NSString*)contentId NS_SWIFT_NAME(sendViewContentEvent(tag:contentId:));
/**
 Search Event
 @param tag tag
 @param searchString 검색어
 */
+ (void)sendSearchEventWithTag:(NSString*)tag searchString:(NSString*)searchString NS_SWIFT_NAME(sendSearchEvent(tag:searchString:));
/**
  구매 이벤트
 @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
 @param totalQuantity 주문에 포함된 상품수
 @param totalPrice 주문 전체 금액
 @param currency 결제 금액 통화 (ISO4217 포맷)
 @param products KakaoAdDetailProduct 클래스 객체의 Array 타입을 입력 받습니다. 개별 주문 상품 상세 정보의 리스트 입니다.
 */
+ (void)sendPurchaseEventWithTag:(NSString*)tag
            totalQuantity:(NSInteger)totalQuantity
               totalPrice:(double)totalPrice
                 currency:(NSString*)currency
                 products:(NSArray<KakaoAdDetailProduct*>*)products NS_SWIFT_NAME(sendPurchaseEvent(tag:totalQuantity:totalPrice:currency:products:));
/**
 앱내 구매 이벤트
 @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
 @param totalQuantity 주문에 포함된 상품수
 @param totalPrice 주문 전체 금액
 @param currency 결제 금액 통화 (ISO4217 포맷)
 @param products KakaoAdDetailProduct 클래스 객체의 Array 타입을 입력 받습니다. 개별 주문 상품 상세 정보의 리스트 입니다.
 */
+ (void)sendInAppPurchaseEventWithTag:(NSString*)tag
                 totalQuantity:(NSInteger)totalQuantity
                    totalPrice:(double)totalPrice
                      currency:(NSString*)currency
                      products:(NSArray*)products NS_SWIFT_NAME(sendInAppPurchaseEvent(tag:totalQuantity:totalPrice:currency:products:));

/**
 잠재고객 이벤트
 @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
 */
+ (void)sendParticipationEventWithTag:(NSString*)tag NS_SWIFT_NAME(sendParticipationEvent(tag:));

/**
 가입 및 등록 이벤트
 @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
 */
+ (void)sendSignUpEventWithTag:(NSString*)tag NS_SWIFT_NAME(sendSignUpEvent(tag:));

@end
