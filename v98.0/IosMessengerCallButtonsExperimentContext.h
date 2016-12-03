/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosMessengerCallButtonsExperimentContext : FBExperimentContext {

	BOOL _acceptCallButtonOnRight;
	BOOL _dynamicMuteButton;
	BOOL _switchCameraInButtonPanel;

}

@property (assign,nonatomic) BOOL acceptCallButtonOnRight;                //@synthesize acceptCallButtonOnRight=_acceptCallButtonOnRight - In the implementation block
@property (assign,nonatomic) BOOL dynamicMuteButton;                      //@synthesize dynamicMuteButton=_dynamicMuteButton - In the implementation block
@property (assign,nonatomic) BOOL switchCameraInButtonPanel;              //@synthesize switchCameraInButtonPanel=_switchCameraInButtonPanel - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)acceptCallButtonOnRight;
-(BOOL)dynamicMuteButton;
-(BOOL)switchCameraInButtonPanel;
-(void)setAcceptCallButtonOnRight:(BOOL)arg1 ;
-(void)setDynamicMuteButton:(BOOL)arg1 ;
-(void)setSwitchCameraInButtonPanel:(BOOL)arg1 ;
@end

