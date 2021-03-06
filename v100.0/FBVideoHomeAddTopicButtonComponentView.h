/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBVideoHomeAddTopicButton, FBMemModelObject, FBUserSession;

@interface FBVideoHomeAddTopicButtonComponentView : UIView {

	FBVideoHomeAddTopicButton* _button;
	BOOL _viewInvalidated;
	BOOL _darkBackground;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	FBUserSession* _session;
	long long _buttonAlignment;
	/*^block*/id _videoHomeSessionIDProvider;
	/*^block*/id _stateToggledToBlock;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> videoChannel;              //@synthesize videoChannel=_videoChannel - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                          //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL darkBackground;                                                              //@synthesize darkBackground=_darkBackground - In the implementation block
@property (assign,nonatomic) long long buttonAlignment;                                                        //@synthesize buttonAlignment=_buttonAlignment - In the implementation block
@property (nonatomic,copy) id videoHomeSessionIDProvider;                                                      //@synthesize videoHomeSessionIDProvider=_videoHomeSessionIDProvider - In the implementation block
@property (nonatomic,copy) id stateToggledToBlock;                                                             //@synthesize stateToggledToBlock=_stateToggledToBlock - In the implementation block
-(void)setVideoChannel:(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)arg1 ;
-(void)setDarkBackground:(BOOL)arg1 ;
-(void)setButtonAlignment:(long long)arg1 ;
-(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)videoChannel;
-(BOOL)darkBackground;
-(long long)buttonAlignment;
-(id)videoHomeSessionIDProvider;
-(void)setVideoHomeSessionIDProvider:(id)arg1 ;
-(id)stateToggledToBlock;
-(void)setStateToggledToBlock:(id)arg1 ;
-(void)layoutSubviews;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

