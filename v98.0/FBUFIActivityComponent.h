/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@class FBUFITheme, NSArray, NSString;

@interface FBUFIActivityComponent : CKCompositeComponent {

	FBUFITheme* _theme;
	NSArray* _trackingCodes;
	NSString* _recentActivityType;

}

@property (nonatomic,readonly) FBUFITheme * theme;                              //@synthesize theme=_theme - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                    //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSString * recentActivityType;              //@synthesize recentActivityType=_recentActivityType - In the implementation block
+(id)newWithRealTimeActivityInfo:(id)arg1 theme:(id)arg2 action:(CKTypedComponentAction<>)arg3 toolbox:(id)arg4 ;
-(NSArray *)trackingCodes;
-(NSString *)recentActivityType;
-(FBUFITheme *)theme;
@end
