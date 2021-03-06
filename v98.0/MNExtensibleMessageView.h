/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNCoreTextViewDelegate.h>
#import <Messenger/MNMessageCellElementControllerDelegate.h>
#import <Messenger/MNPhotoPreviewing.h>

@protocol MNBubbleDisplayConfiguring, MNExtensibleMessageViewDelegate, MNMessageCellLinkHandling, MNMessageCellElementControllerActionHandler;
@class FBLazyCreator, MNAttachmentViewLifecycleController, UIImage, MNMessageTextDataDetector, MNMessageCellLayoutSpec, MNMessageRow, NSString;

@interface MNExtensibleMessageView : UIView <MNCoreTextViewDelegate, MNMessageCellElementControllerDelegate, MNPhotoPreviewing> {

	FBLazyCreator* _bubbleViewCreator;
	FBLazyCreator* _bubbleOverlayCreator;
	FBLazyCreator* _textViewCreator;
	FBLazyCreator* _cornerMaskViewCreator;
	MNAttachmentViewLifecycleController* _attachmentViewLifecycleController;
	UIImage* _bubbleBackgroundImage;
	MNMessageTextDataDetector* _messageTextDataDetector;
	id<MNBubbleDisplayConfiguring> _bubbleDisplayConfigurer;
	BOOL _isVisible;
	id<MNExtensibleMessageViewDelegate> _delegate;
	MNMessageCellLayoutSpec* _layoutSpec;
	MNMessageRow* _messageRow;
	id<MNMessageCellLinkHandling> _messageCellLinkHandler;
	id<MNMessageCellElementControllerActionHandler> _actionHandler;

}

@property (assign,nonatomic,__weak) id<MNExtensibleMessageViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNMessageCellLayoutSpec * layoutSpec;                                         //@synthesize layoutSpec=_layoutSpec - In the implementation block
@property (nonatomic,copy) MNMessageRow * messageRow;                                                    //@synthesize messageRow=_messageRow - In the implementation block
@property (assign,nonatomic,__weak) id<MNMessageCellLinkHandling> messageCellLinkHandler;                //@synthesize messageCellLinkHandler=_messageCellLinkHandler - In the implementation block
@property (nonatomic,retain) id<MNMessageCellElementControllerActionHandler> actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewablePhotoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setMessageRow:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateMessageBody;
-(MNMessageRow *)messageRow;
-(id<MNMessageCellLinkHandling>)messageCellLinkHandler;
-(void)didDisappear;
-(id)initWithFrame:(CGRect)arg1 messageTextDataDetector:(id)arg2 bubbleDisplayConfigurer:(id)arg3 attachmentStyleRenderManager:(id)arg4 attachmentViewCachedFactory:(id)arg5 ;
-(void)setMessageCellLinkHandler:(id<MNMessageCellLinkHandling>)arg1 ;
-(void)setMessageRow:(MNMessageRow *)arg1 ;
-(void)setLayoutSpec:(MNMessageCellLayoutSpec *)arg1 ;
-(void)setLayoutSpec:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateSubviewsAnimated:(BOOL)arg1 ;
-(void)_updateBubbleViewAnimated:(BOOL)arg1 ;
-(MNMessageCellLayoutSpec *)layoutSpec;
-(void)messageCellElementController:(id)arg1 didInvalidateLayoutForView:(id)arg2 ;
-(void)updateAsHighlighted:(BOOL)arg1 ;
-(void)_updateAttachmentLayout;
-(void)_setUpXMAView;
-(void)_updateBubbleOverlayAnimated:(BOOL)arg1 ;
-(void)_updateBubbleViewAttributesAnimated:(BOOL)arg1 ;
-(void)_updateBubbleOverlayAttributesAnimated:(BOOL)arg1 ;
-(void)_tearDownXMAView;
-(void)coreTextView:(id)arg1 didTapLink:(id)arg2 ;
-(void)coreTextView:(id)arg1 didLongPressLink:(id)arg2 ;
-(void)showContextMenuAnimated:(BOOL)arg1 handler:(id)arg2 ;
-(void)setDelegate:(id<MNExtensibleMessageViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNExtensibleMessageViewDelegate>)delegate;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(void)willAppear;
-(id<MNMessageCellElementControllerActionHandler>)actionHandler;
-(void)setActionHandler:(id<MNMessageCellElementControllerActionHandler>)arg1 ;
@end

