/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPopoverActionSheet.h>

@class FBModalViewCoordinator, FBDelegateForwarder;

@interface _FBPopoverControllerCoordinatorNotifyingPopoverActionSheet : FBPopoverActionSheet {

	FBModalViewCoordinator* _coordinator;
	FBDelegateForwarder* _forwarder;
	id _mainDelegate;

}
-(void)presentPopoverAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resetForwarder;
-(void)_configureCoordinator:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
@end
