/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBUserSession, FBMemModelObject;

@interface FBVideoHomeFollowButtonComponent : CKCompositeComponent {

	BOOL _showNUX;
	FBUserSession* _session;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;

}

@property (nonatomic,retain) FBUserSession * session;                                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> videoChannel;              //@synthesize videoChannel=_videoChannel - In the implementation block
@property (assign,nonatomic) BOOL showNUX;                                                                     //@synthesize showNUX=_showNUX - In the implementation block
+(id)newWithVideoChannel:(id)arg1 videoID:(id)arg2 session:(id)arg3 darkBackground:(BOOL)arg4 sizeStyle:(unsigned long long)arg5 buttonAlignment:(long long)arg6 showVideoHomeTabItemBling:(BOOL)arg7 showNUX:(BOOL)arg8 hideIfAlreadyFollowing:(BOOL)arg9 videoHomeSessionIDProvider:(/*^block*/id)arg10 stateToggledToBlock:(/*^block*/id)arg11 ;
-(void)setVideoChannel:(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)arg1 ;
-(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)videoChannel;
-(BOOL)showNUX;
-(void)setShowNUX:(BOOL)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

