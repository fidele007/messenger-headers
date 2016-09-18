/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeopleCellDelegate, MNPeopleCellActionButtonsStateCoordinatorDelegate;
@class NSMutableDictionary;

@interface MNPeopleCellActionButtonsStateCoordinator : NSObject {

	NSMutableDictionary* _actionButtonStateQueue;
	id<MNPeopleCellDelegate> _peopleCellDelegate;
	id<MNPeopleCellActionButtonsStateCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPeopleCellDelegate> peopleCellDelegate;                                 //@synthesize peopleCellDelegate=_peopleCellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleCellActionButtonsStateCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updatePeopleCellActionButtonState:(id)arg1 forConversationContact:(id)arg2 ;
-(id)peopleCellActionButtonStateForConversationContact:(id)arg1 ;
-(void)setPeopleCellDelegate:(id<MNPeopleCellDelegate>)arg1 ;
-(void)updateAllButtonsInLoadingStateToTappedState;
-(BOOL)_areAllActionButtonsInNormalState;
-(id<MNPeopleCellDelegate>)peopleCellDelegate;
-(void)setDelegate:(id<MNPeopleCellActionButtonsStateCoordinatorDelegate>)arg1 ;
-(id)init;
-(id<MNPeopleCellActionButtonsStateCoordinatorDelegate>)delegate;
@end
