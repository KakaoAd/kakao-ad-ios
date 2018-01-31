//
//  ViewController.m
//  KakaoChipExample
//
//  Created by KAKAO on 2017. 12. 12..
//  Copyright © 2017년 KAKAO. All rights reserved.
//

#import "ViewController.h"
#import <KakaoSDK/KakaoSDK.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    NSString* tag = @"tag";
    
    // 가입
    [KakaoAdTracker sendCompleteRegisterEventWithTag:tag];
    
    // 장바구니 보기
    [KakaoAdTracker sendViewCartEventWithTag:tag];
    
    // 콘텐츠/상품 조회
    NSString* contentId = @"contentId";
    [KakaoAdTracker sendViewContentEventWithTag:tag contentId:contentId];
    
    // 검색
    NSString* searchString = @"robot";
    [KakaoAdTracker sendSearchEventWithTag:tag searchString:searchString];
    
    // 구매
    KakaoAdDetailProduct* product_1 = [[KakaoAdDetailProduct alloc] initWithName:@"pencil" quantity:5 price:400];
    KakaoAdDetailProduct* product_2 = [[KakaoAdDetailProduct alloc] initWithName:@"eraser" quantity:1 price:1000];
    NSInteger totalQuantity = 6;
    double totalPrice = 3000;
    NSString* currency = @"KRW";
    
    [KakaoAdTracker sendPurchaseEventWithTag:tag totalQuantity:totalQuantity totalPrice:totalPrice currency:currency products:@[product_1, product_2]];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
