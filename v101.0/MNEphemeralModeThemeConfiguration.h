/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNEphemeralModeThemeConfiguration : FBValueObject <NSCopying> {

	UIColor* _navigationBarColor;
	UIColor* _navigationBarItemColor;
	UIColor* _navigationBarTitleColor;
	UIColor* _navigationBarSubtitleColor;

}

@property (nonatomic,copy,readonly) UIColor * navigationBarColor;                      //@synthesize navigationBarColor=_navigationBarColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * navigationBarItemColor;                  //@synthesize navigationBarItemColor=_navigationBarItemColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * navigationBarTitleColor;                 //@synthesize navigationBarTitleColor=_navigationBarTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * navigationBarSubtitleColor;              //@synthesize navigationBarSubtitleColor=_navigationBarSubtitleColor - In the implementation block
-(UIColor *)navigationBarColor;
-(UIColor *)navigationBarItemColor;
-(UIColor *)navigationBarTitleColor;
-(UIColor *)navigationBarSubtitleColor;
-(id)initWithNavigationBarColor:(id)arg1 navigationBarItemColor:(id)arg2 navigationBarTitleColor:(id)arg3 navigationBarSubtitleColor:(id)arg4 ;
@end

