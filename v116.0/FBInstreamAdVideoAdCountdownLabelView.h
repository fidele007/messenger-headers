/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBInstreamAdVideoAdCountdownViewProtocol.h>

@class UILabel, FBMemVideo, FBUserSession, NSString;

@interface FBInstreamAdVideoAdCountdownLabelView : UIView <FBInstreamAdVideoAdCountdownViewProtocol> {

	UILabel* _countdownMessage;
	FBMemVideo* _video;
	FBUserSession* _session;
	CGRect _videoFrame;
	double _currentTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVideoFrame:(CGRect)arg1 ;
-(id)initWithVideo:(id)arg1 session:(id)arg2 ;
-(void)setCurrentTime:(double)arg1 totalTime:(double)arg2 ;
-(void)layoutSubviews;
@end

