/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface MNMessageReceiptStateViewModel : FBValueObject <NSCopying> {

	unsigned long long _receiptState;
	NSString* _offlineThreadingId;
	UIColor* _color;
	UIColor* _backgroundCircleColor;

}

@property (nonatomic,readonly) unsigned long long receiptState;                   //@synthesize receiptState=_receiptState - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineThreadingId;                //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
@property (nonatomic,copy,readonly) UIColor * color;                              //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundCircleColor;              //@synthesize backgroundCircleColor=_backgroundCircleColor - In the implementation block
-(unsigned long long)receiptState;
-(UIColor *)backgroundCircleColor;
-(id)initWithReceiptState:(unsigned long long)arg1 offlineThreadingId:(id)arg2 color:(id)arg3 backgroundCircleColor:(id)arg4 ;
-(NSString *)offlineThreadingId;
-(UIColor *)color;
@end

