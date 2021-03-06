/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPhotoViewActionSheetItem : NSObject {

	NSString* _title;
	long long _style;
	NSString* _analyticsEvent;
	SEL _selector;

}

@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;                      //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * analyticsEvent;              //@synthesize analyticsEvent=_analyticsEvent - In the implementation block
@property (assign,nonatomic) SEL selector;                         //@synthesize selector=_selector - In the implementation block
-(id)initWithTitle:(id)arg1 style:(long long)arg2 analyticsEvent:(id)arg3 selector:(SEL)arg4 ;
-(id)initWithTitle:(id)arg1 analyticsEvent:(id)arg2 selector:(SEL)arg3 ;
-(NSString *)analyticsEvent;
-(void)setAnalyticsEvent:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(long long)style;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void)setStyle:(long long)arg1 ;
@end

