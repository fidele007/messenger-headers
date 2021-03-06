/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNForwardSenderListening.h>
#import <Messenger/MNMessageCellElementController.h>

@protocol MNMessageCellElementControllerActionHandler;
@class MNMessageUpsellControllerInjector, MNMessageUpsellView, MNMessageUpsellViewModel, NSString;

@interface MNMessageUpsellController : NSObject <FBClassInjectable, MNForwardSenderListening, MNMessageCellElementController> {

	MNMessageUpsellControllerInjector* _injector;
	MNMessageUpsellView* _view;
	MNMessageUpsellViewModel* _viewModel;
	id<MNMessageCellElementControllerActionHandler> _actionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)willAppearWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)willUpdateWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)didTapInThread:(id)arg1 actionHandler:(id)arg2 ;
-(void)messageForwardSender:(id)arg1 didEndForwardingMessageToRecipients:(id)arg2 singleRecipientToErrorMap:(id)arg3 batchSendResultInfo:(id)arg4 ;
-(void)_addMessageToMontage:(id)arg1 threadKey:(id)arg2 ;
-(void)_forwardMessageToMontage:(id)arg1 threadKey:(id)arg2 ;
-(void)_logUpsellTappedWithType:(long long)arg1 ;
-(void)messageForwardSender:(id)arg1 willBeginForwardingMessageToRecipients:(id)arg2 ;
-(void)messageForwardSender:(id)arg1 didEndForwardingMessageToRecipient:(id)arg2 remainingRecipientsCount:(unsigned long long)arg3 error:(id)arg4 ;
@end

