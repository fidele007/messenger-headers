/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow, UIView, NSArray;

@interface _O_UIHover : NSObject {

	UIWindow* _window;
	UIView* _view;
	NSArray* _gestureRecognizers;
	double _timestamp;
	long long _phase;

}

@property (nonatomic,readonly) UIWindow * window;                         //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UIView * view;                             //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers;              //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (nonatomic,readonly) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long phase;                           //@synthesize phase=_phase - In the implementation block
+(id)alloc;
-(UIWindow *)window;
-(UIView *)view;
-(double)timestamp;
-(long long)phase;
-(NSArray *)gestureRecognizers;
@end

