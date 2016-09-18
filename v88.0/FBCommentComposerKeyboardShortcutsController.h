/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentComposerKeyboardShortcutsControllerDelegate;
@class FBCommentComposerView, FBCommentComposerMentionController, FBComposerMentionKeyboardController;

@interface FBCommentComposerKeyboardShortcutsController : NSObject {

	FBCommentComposerView* _composerView;
	FBCommentComposerMentionController* _mentionController;
	FBComposerMentionKeyboardController* _mentionKeyboardController;
	id<FBCommentComposerKeyboardShortcutsControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCommentComposerKeyboardShortcutsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMentionController:(id)arg1 commentComposerView:(id)arg2 ;
-(void)handleKey:(long long)arg1 ;
-(void)setDelegate:(id<FBCommentComposerKeyboardShortcutsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCommentComposerKeyboardShortcutsControllerDelegate>)delegate;
@end
