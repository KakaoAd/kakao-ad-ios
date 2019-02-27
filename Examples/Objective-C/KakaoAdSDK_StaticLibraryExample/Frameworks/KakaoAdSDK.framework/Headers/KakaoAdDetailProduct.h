//
//  KakaoAdDetailProduct.h
//  KakaoChip-Objc
//
//  Created by dwkim on 2017. 12. 3..
//  Copyright © 2017년 KAKAO. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 구매 이벤트 전송시에 Products 파라메터의 Array 에 들어가는 상세 타입
 상품명, 수량, 가격 정보를 가지고 있습니다.
 */
@interface KakaoAdDetailProduct : NSObject

/**
 상품명
 */
@property (nullable, nonatomic, readonly) NSString* name;
/**
 상품수량
 */
@property (nonatomic, readonly) NSUInteger quantity;
/**
 상품가격
 */
@property (nonatomic, readonly) double price;

/**
 구매 이벤트를 전송할 때 Producs 파라메터의 세부 항목을 생성합니다. 구매 이벤트의 Products 파라메터는 Array고
 그 세부 항목의 타입은 KakaoAdDetailProduct 입니다.
 @param name 상품명
 @param quantity 상품수량
 @param price 상품가격

 @return KakaoAdDetailProduct instance
 */
- (nonnull instancetype)initWithName:(nullable NSString*)name quantity:(NSUInteger)quantity price:(double)price;
/**
  해당 인스턴스의 프로퍼티 값들을 딕셔너리로 반환합니다. 값들의 키값은 프로퍼티 명과 동일하고, 값들의 타입은 모두 문자열입니다.

 @return 인스턴스 프로퍼티들의 딕셔너리 변환값
 */
- (NSDictionary* _Nonnull )dictionaryRepresentation;

@end
