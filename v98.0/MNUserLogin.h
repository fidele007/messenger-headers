/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNUserLogin
@property (assign,nonatomic,__weak) id<MNUserLoginDelegate> delegate; 
@required
-(void)loginWithEmail:(id)arg1 password:(id)arg2 machineID:(id)arg3 loginSecret:(id)arg4;
-(void)loginWithSSOUsingCredentials:(id)arg1;
-(void)cancel;
-(void)setDelegate:(id)arg1;
-(id<MNUserLoginDelegate>)delegate;

@end

