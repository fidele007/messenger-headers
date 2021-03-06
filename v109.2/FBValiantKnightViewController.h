/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBAvatarProtocol, FBValiantKnightViewControllerDelegate;
@class FBMemModelObject, NSString, FBUserSession, FBTimelineAnalytics;

@interface FBValiantKnightViewController : UIViewController {

	FBMemModelObject*<FBAvatarProtocol> _avatar;
	BOOL _avatarFetchComplete;
	BOOL _viewIsOnscreen;
	NSString* _FBID;
	Class _expectedType;
	NSString* _friendRequestSendReference;
	FBUserSession* _session;
	FBTimelineAnalytics* _timelineAnalytics;
	NSString* _actionType;
	NSString* _profileType;
	id<FBValiantKnightViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) FBUserSession * session;                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBTimelineAnalytics * timelineAnalytics;                              //@synthesize timelineAnalytics=_timelineAnalytics - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionType;                                           //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileType;                                          //@synthesize profileType=_profileType - In the implementation block
@property (assign,nonatomic,__weak) id<FBValiantKnightViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isAvatarTypeExpected:(id)arg1 expectedType:(Class)arg2 ;
-(void)_fetchAvatar;
-(void)tryToRender;
-(void)_fetchAvatarWithReplacementId:(id)arg1 error:(id)arg2 ;
-(id)initWithFBID:(id)arg1 expectedType:(Class)arg2 timelineAnalytics:(id)arg3 actionType:(id)arg4 profileType:(id)arg5 session:(id)arg6 friendRequestSendReference:(id)arg7 ;
-(BOOL)fb_showAuxiliaryViewController;
-(FBTimelineAnalytics *)timelineAnalytics;
-(id)analyticsModule;
-(void)setDelegate:(id<FBValiantKnightViewControllerDelegate>)arg1 ;
-(id<FBValiantKnightViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(NSString *)profileType;
-(FBUserSession *)session;
-(NSString *)actionType;
-(void)_handleResponse:(id)arg1 ;
@end

