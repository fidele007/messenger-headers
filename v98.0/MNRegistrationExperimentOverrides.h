/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface MNRegistrationExperimentOverrides : NSObject {

	NSUserDefaults* _userDefaults;

}

@property (assign,nonatomic) BOOL shouldForceRegistration; 
@property (assign,nonatomic) BOOL shouldForceAuthenticationOptions; 
+(id)sharedInstance;
-(BOOL)shouldForceRegistration;
-(BOOL)shouldForceAuthenticationOptions;
-(void)setShouldForceRegistration:(BOOL)arg1 ;
-(void)setShouldForceAuthenticationOptions:(BOOL)arg1 ;
-(id)init;
@end

