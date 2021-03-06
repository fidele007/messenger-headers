/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxInterstitial.h>
#import <Messenger/FBFNNUXStep.h>
#import <Messenger/FBFNNUXPrivacyOptionsProtocol.h>

@protocol FBFNNUXStepDelegate, FBFNNUXControllerDelegate;
@class FBFNPrivacyNUXView, FBUserSession, FBFNNuxAppearanceConfiguration, FBMemPrivacyOptionsLocationConnection, FBMemPrivacyOption;

@interface FBFNNUXPrivacyStep : FBNuxInterstitial <FBFNNUXStep, FBFNNUXPrivacyOptionsProtocol> {

	FBFNPrivacyNUXView* _privacyView;
	FBUserSession* _session;
	id<FBFNNUXStepDelegate> _stepDelegate;
	id<FBFNNUXControllerDelegate> _controllerDelegate;
	FBFNNuxAppearanceConfiguration* _appearanceConfiguration;
	unsigned long long _nuxMode;
	FBMemPrivacyOptionsLocationConnection* _privacyOptions;
	FBMemPrivacyOption* _privacyOption;

}

@property (nonatomic,readonly) FBUserSession * session;                                               //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<FBFNNUXStepDelegate> stepDelegate;                             //@synthesize stepDelegate=_stepDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBFNNUXControllerDelegate> controllerDelegate;                 //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (nonatomic,readonly) FBFNNuxAppearanceConfiguration * appearanceConfiguration;              //@synthesize appearanceConfiguration=_appearanceConfiguration - In the implementation block
@property (nonatomic,readonly) unsigned long long nuxMode;                                            //@synthesize nuxMode=_nuxMode - In the implementation block
@property (nonatomic,retain) FBMemPrivacyOption * privacyOption;                                      //@synthesize privacyOption=_privacyOption - In the implementation block
@property (nonatomic,retain) FBMemPrivacyOptionsLocationConnection * privacyOptions;                  //@synthesize privacyOptions=_privacyOptions - In the implementation block
-(FBMemPrivacyOption *)privacyOption;
-(void)setStepDelegate:(id<FBFNNUXStepDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 appearanceConfiguration:(id)arg2 nuxMode:(unsigned long long)arg3 ;
-(void)setPrivacyOptions:(FBMemPrivacyOptionsLocationConnection *)arg1 ;
-(void)setPrivacyOption:(FBMemPrivacyOption *)arg1 ;
-(FBMemPrivacyOptionsLocationConnection *)privacyOptions;
-(id)initWithSession:(id)arg1 appearanceConfiguration:(id)arg2 ;
-(void)_didTapShareWithButton;
-(void)_didTapLinkTap:(id)arg1 withEvent:(id)arg2 ;
-(FBFNNuxAppearanceConfiguration *)appearanceConfiguration;
-(unsigned long long)nuxMode;
-(void)configureInterstitialView:(id)arg1 ;
-(id<FBFNNUXStepDelegate>)stepDelegate;
-(void)reloadData;
-(id<FBFNNUXControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<FBFNNUXControllerDelegate>)arg1 ;
-(Class)viewControllerClass;
-(FBUserSession *)session;
@end

