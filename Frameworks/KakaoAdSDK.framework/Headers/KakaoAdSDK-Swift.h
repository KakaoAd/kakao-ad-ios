#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef KAKAOADSDK_SWIFT_H
#define KAKAOADSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="KakaoAdSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

/// 구매 이벤트 전송시에 Products 파라메터의 Array 에 들어가는 상세 타입
/// 상품명, 수량, 가격 정보를 가지고 있습니다.
SWIFT_CLASS("_TtC10KakaoAdSDK20KakaoAdDetailProduct")
@interface KakaoAdDetailProduct : NSObject
/// 구매 이벤트를 전송할 때 Producs 파라메터의 세부 항목을 생성합니다. 구매 이벤트의 Products 파라메터는 Array고
/// 그 세부 항목의 타입은 KakaoAdDetailProduct 입니다.
/// @param name 상품명
/// @param quantity 상품수량
/// @param price 상품가격
/// @return KakaoAdDetailProduct instance
- (nonnull instancetype)initWithName:(NSString * _Nullable)name quantity:(NSInteger)quantity price:(double)price OBJC_DESIGNATED_INITIALIZER;
/// 구매 이벤트를 전송할 때 Producs 파라메터의 세부 항목을 생성합니다. 구매 이벤트의 Products 파라메터는 Array고
/// 그 세부 항목의 타입은 KakaoAdDetailProduct 입니다.
/// @param id 상품아이디
/// @param name 상품명
/// @param quantity 상품수량
/// @param price 상품가격
/// @return KakaoAdDetailProduct instance
- (nonnull instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name quantity:(NSInteger)quantity price:(double)price OBJC_DESIGNATED_INITIALIZER;
/// 해당 인스턴스의 프로퍼티 값들을 딕셔너리로 반환합니다. 값들의 키값은 프로퍼티 명과 동일하고, 값들의 타입은 모두 문자열입니다.
/// @return 인스턴스 프로퍼티들의 딕셔너리 변환값
- (NSDictionary<NSString *, NSString *> * _Nonnull)dictionaryRepresentation SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 이벤트 수집을 위한 기본 클래스
/// 설치, 실행, 회원가입, 장바구니 보기, 검색, 구매, 앱내 구매에 대한 이벤트를 이벤트 수집서버로 전송할 수 있습니다.
/// 설치, 실행, 앱내 구매에 대한 이벤트는 이벤트 발생시 자동으로 이벤트 서버로 이벤트가 전송 됩니다.
SWIFT_CLASS("_TtC10KakaoAdSDK14KakaoAdTracker")
@interface KakaoAdTracker : NSObject
/// 광고계정별로 고유한 식별값.
/// trackId 를 설정하지 않을 경우 이벤트 수집은 이루어지지 않습니다.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull trackId;)
+ (NSString * _Nonnull)trackId SWIFT_WARN_UNUSED_RESULT;
+ (void)setTrackId:(NSString * _Nonnull)value;
/// 이벤트 트래커 활성화
+ (void)activate;
/// 장바구니 보기 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
+ (void)sendViewCartEventWithTag:(NSString * _Nullable)tag;
/// 회원가입 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
+ (void)sendCompleteRegisterEventWithTag:(NSString * _Nullable)tag;
/// 콘텐츠/상품 조회 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
/// @param contentId 콘텐츠/상품 코드
+ (void)sendViewContentEventWithTag:(NSString * _Nullable)tag contentId:(NSString * _Nullable)contentId;
/// Search Event
/// @param tag tag
/// @param searchString 검색어
+ (void)sendSearchEventWithTag:(NSString * _Nullable)tag searchString:(NSString * _Nullable)searchString;
/// 구매 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
/// @param totalQuantity 주문에 포함된 상품수
/// @param totalPrice 주문 전체 금액
/// @param currency 결제 금액 통화 (ISO4217 포맷)
/// @param products KakaoAdDetailProduct 클래스 객체의 Array 타입을 입력 받습니다. 개별 주문 상품 상세 정보의 리스트 입니다.
+ (void)sendPurchaseEventWithTag:(NSString * _Nullable)tag totalQuantity:(NSInteger)totalQuantity totalPrice:(double)totalPrice currency:(NSString * _Nullable)currency products:(NSArray<KakaoAdDetailProduct *> * _Nonnull)products;
/// 목표달성
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
+ (void)sendMissionCompleteEventWithTag:(NSString * _Nullable)tag;
/// 튜토리얼 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
+ (void)sendTutorialEventWithTag:(NSString * _Nullable)tag;
/// 사전준비 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
+ (void)sendPreparationEventWithTag:(NSString * _Nullable)tag;
/// 로그인 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
+ (void)sendLoginEventWithTag:(NSString * _Nullable)tag;
/// 잠재고객 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
+ (void)sendParticipationEventWithTag:(NSString * _Nullable)tag;
/// 서비스신청 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
+ (void)sendSignUpEventWithTag:(NSString * _Nullable)tag;
/// 장바구니 추가 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
/// @param contentId 콘텐츠/상품 코드
+ (void)sendAddToCartEventWithTag:(NSString * _Nullable)tag contentId:(NSString * _Nullable)contentId;
/// 관심상품 추가 이벤트
/// @param tag tag 의 경우, 한 광고계정 내에서 같은 이벤트코드 내에서도 특별한 분류가 필요할 때 추가합니다.
/// @param contentId 콘텐츠/상품 코드
+ (void)sendAddToWishListEventWithTag:(NSString * _Nullable)tag contentId:(NSString * _Nullable)contentId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10KakaoAdSDK10LogChecker")
@interface LogChecker : NSObject
+ (void)openLogConsole;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10KakaoAdSDK6Logger")
@interface Logger : NSObject
+ (void)debug:(NSString * _Nonnull)log fileName:(NSString * _Nonnull)fileName functionName:(NSString * _Nonnull)functionName line:(NSInteger)line;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
