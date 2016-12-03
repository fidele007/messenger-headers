/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
+(id)newWithVideoChannel:(id)arg1 videoID:(id)arg2 session:(id)arg3 darkBackground:(BOOL)arg4 buttonAlignment:(long long)arg5 showVideoHomeTabItemBling:(BOOL)arg6 showNUX:(BOOL)arg7 hideIfAlreadyFollowing:(BOOL)arg8 videoHomeSessionIDProvider:(/*^block*/id)arg9 stateToggledToBlock:(/*^block*/id)arg10 ;
-(void)setVideoChannel:(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)arg1 ;
-(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)videoChannel;
-(BOOL)showNUX;
-(void)setShowNUX:(BOOL)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
