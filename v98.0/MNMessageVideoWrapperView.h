/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNVideoViewNodeCloseDelegate.h>

@class MNVideoViewNode, MNMessageVideoView, NSString;

@interface MNMessageVideoWrapperView : UIView <MNVideoViewNodeCloseDelegate> {

	MNVideoViewNode* _videoViewNode;
	MNMessageVideoView* _videoView;

}

@property (nonatomic,readonly) MNVideoViewNode * videoViewNode;              //@synthesize videoViewNode=_videoViewNode - In the implementation block
@property (nonatomic,readonly) MNMessageVideoView * videoView;               //@synthesize videoView=_videoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNVideoViewNode *)videoViewNode;
-(id)initWithVideoView:(id)arg1 videoViewNodeConfiguration:(id)arg2 ;
-(id)videoNodeCloseView:(id)arg1 ;
-(CGRect)videoNodeCloseFrame:(id)arg1 ;
-(void)layoutSubviews;
-(MNMessageVideoView *)videoView;
@end

