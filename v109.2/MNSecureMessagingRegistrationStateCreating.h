/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingRegistrationStateCreating <NSObject>
@required
-(long long)setDidBeginRegistrationOfCryptoState:(id)arg1 registrationIdentifier:(id)arg2 multiDevice:(BOOL)arg3;
-(BOOL)setDidCompleteLegacyRegistrationWithPrimaryDeviceStatus:(long long)arg1 registrationIdentifier:(id)arg2;
-(BOOL)setDidCompleteRegistrationWithDeviceStatus:(long long)arg1 primaryDeviceStatus:(long long)arg2 registrationIdentifier:(id)arg3;
-(BOOL)setDidFailRegistrationRequestWithIdentifier:(id)arg1 error:(id)arg2;

@end

