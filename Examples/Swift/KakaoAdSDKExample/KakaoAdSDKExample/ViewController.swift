//
//  ViewController.swift
//  KakaoChipExample
//
//  Created by KAKAO on 2017. 12. 12..
//  Copyright © 2017년 KAKAO. All rights reserved.
//

import UIKit
import KakaoAdSDK

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        let tag = "tag"
        
        // 가입
        KakaoAdTracker.sendCompleteRegisterEvent(tag: tag)
        
        // 장바구니 보기
        KakaoAdTracker.sendViewCartEvent(tag: tag)
        
        // 콘텐츠/상품 조회
        let contentId = "contentId"
        KakaoAdTracker.sendViewContentEvent(tag: tag, contentId:contentId)
        
        // 검색
        let searchString = "robot"
        KakaoAdTracker.sendSearchEvent(tag: tag, searchString: searchString)
        
        // 구매
        let product_1 = KakaoAdDetailProduct(name: "pencil", quantity: 5, price: 400)
        let product_2 = KakaoAdDetailProduct(name: "eraser", quantity: 1, price: 1000)
        let totalQuantity: Int = 6
        let totalPrice: Double = 3000
        let currency = "KRW"
        
        KakaoAdTracker.sendPurchaseEvent(tag: tag, totalQuantity: totalQuantity, totalPrice: totalPrice, currency:currency, products:[product_1, product_2])
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

