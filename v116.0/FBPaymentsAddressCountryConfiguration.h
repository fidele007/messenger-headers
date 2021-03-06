/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsAddressCountryConfiguration : FBValueObject <NSCopying> {

	NSString* _addressFirstLinePlaceHolderText;
	NSString* _addressSecondLinePlaceHolderText;
	NSString* _cityPlaceHolderText;
	NSString* _regionPlaceHolderText;
	NSString* _postalCodePlaceHolderText;
	/*^block*/id _genericNameInputHandlerFactory;
	/*^block*/id _regionInputHandlerFactory;
	/*^block*/id _postalCodeInputHandlerFactory;
	/*^block*/id _regionCompletionStateChecker;
	/*^block*/id _postalCodeCompletionStateChecker;

}

@property (nonatomic,copy,readonly) NSString * addressFirstLinePlaceHolderText;               //@synthesize addressFirstLinePlaceHolderText=_addressFirstLinePlaceHolderText - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressSecondLinePlaceHolderText;              //@synthesize addressSecondLinePlaceHolderText=_addressSecondLinePlaceHolderText - In the implementation block
@property (nonatomic,copy,readonly) NSString * cityPlaceHolderText;                           //@synthesize cityPlaceHolderText=_cityPlaceHolderText - In the implementation block
@property (nonatomic,copy,readonly) NSString * regionPlaceHolderText;                         //@synthesize regionPlaceHolderText=_regionPlaceHolderText - In the implementation block
@property (nonatomic,copy,readonly) NSString * postalCodePlaceHolderText;                     //@synthesize postalCodePlaceHolderText=_postalCodePlaceHolderText - In the implementation block
@property (nonatomic,readonly) id genericNameInputHandlerFactory;                             //@synthesize genericNameInputHandlerFactory=_genericNameInputHandlerFactory - In the implementation block
@property (nonatomic,readonly) id regionInputHandlerFactory;                                  //@synthesize regionInputHandlerFactory=_regionInputHandlerFactory - In the implementation block
@property (nonatomic,readonly) id postalCodeInputHandlerFactory;                              //@synthesize postalCodeInputHandlerFactory=_postalCodeInputHandlerFactory - In the implementation block
@property (nonatomic,readonly) id regionCompletionStateChecker;                               //@synthesize regionCompletionStateChecker=_regionCompletionStateChecker - In the implementation block
@property (nonatomic,readonly) id postalCodeCompletionStateChecker;                           //@synthesize postalCodeCompletionStateChecker=_postalCodeCompletionStateChecker - In the implementation block
-(id)initWithAddressFirstLinePlaceHolderText:(id)arg1 addressSecondLinePlaceHolderText:(id)arg2 cityPlaceHolderText:(id)arg3 regionPlaceHolderText:(id)arg4 postalCodePlaceHolderText:(id)arg5 genericNameInputHandlerFactory:(/*^block*/id)arg6 regionInputHandlerFactory:(/*^block*/id)arg7 postalCodeInputHandlerFactory:(/*^block*/id)arg8 regionCompletionStateChecker:(/*^block*/id)arg9 postalCodeCompletionStateChecker:(/*^block*/id)arg10 ;
-(NSString *)addressFirstLinePlaceHolderText;
-(NSString *)addressSecondLinePlaceHolderText;
-(NSString *)cityPlaceHolderText;
-(NSString *)regionPlaceHolderText;
-(NSString *)postalCodePlaceHolderText;
-(id)genericNameInputHandlerFactory;
-(id)regionInputHandlerFactory;
-(id)postalCodeInputHandlerFactory;
-(id)regionCompletionStateChecker;
-(id)postalCodeCompletionStateChecker;
@end

