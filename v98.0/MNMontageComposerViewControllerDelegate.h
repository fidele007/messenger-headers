/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMontageComposerViewControllerDelegate <NSObject>
@required
-(void)montageComposerViewControllerDidDismiss:(id)arg1 userInitiated:(BOOL)arg2 withContentPostedToContacts:(id)arg3;
-(void)montageComposerViewControllerDidBecomeReadyToRecord:(id)arg1;
-(BOOL)montageComposerViewControllerShouldUseBuiltinBroadcastFlow:(id)arg1;
-(BOOL)montageComposerViewControllerShouldPreselectMontageContact:(id)arg1;
-(id)montageComposerViewControllerContactsToHoistAndPreselect:(id)arg1;
-(id)montageComposerViewControllerExtraClientTags:(id)arg1;
-(BOOL)montageComposerViewControllerCanScrollToSwitchState:(id)arg1;
-(void)montageComposerViewController:(id)arg1 didSetState:(id)arg2;
-(void)montageComposerViewController:(id)arg1 didUpdateIsCameraAuthorized:(BOOL)arg2;

@end

