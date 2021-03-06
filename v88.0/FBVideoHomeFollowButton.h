/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBMorphableButton, FBMorphableButtonContent, FBMemModelObject, NSString, FBUserSession, NSOperationQueue;

@interface FBVideoHomeFollowButton : UIView {

	FBMorphableButton* _button;
	FBMorphableButtonContent* _followButtonContent;
	FBMorphableButtonContent* _followingButtonContent;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	NSString* _videoID;
	FBUserSession* _session;
	BOOL _darkBackground;
	long long _buttonAlignment;
	BOOL _showVideoHomeTabItemBling;
	BOOL _hideIfAlreadyFollowing;
	BOOL _stateWasAlreadyFollowingOrSubscribed;
	/*^block*/id _videoHomeSessionIDProvider;
	/*^block*/id _stateToggledToBlock;
	NSOperationQueue* _queueForNextFollowedCLCUpdate;

}
-(id)initWithVideoChannel:(id)arg1 videoID:(id)arg2 session:(id)arg3 darkBackground:(BOOL)arg4 buttonAlignment:(long long)arg5 showVideoHomeTabItemBling:(BOOL)arg6 hideIfAlreadyFollowing:(BOOL)arg7 videoHomeSessionIDProvider:(/*^block*/id)arg8 stateToggledToBlock:(/*^block*/id)arg9 ;
-(void)_layoutSubviewsInternal:(BOOL)arg1 ;
-(void)_didTapFollowButton;
-(void)_didTapFollowingButton;
-(void)_followingValueDidChange:(id)arg1 ;
-(void)_animateVideoTabItemBling;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

