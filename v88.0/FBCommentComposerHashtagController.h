/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBComposerHashtagDecoratorDelegate.h>

@protocol FBComposerCommittedMentionsProvider;
@class FBComposerHashtagDecorator, UITextView, NSArray, NSString;

@interface FBCommentComposerHashtagController : NSObject <FBComposerHashtagDecoratorDelegate> {

	FBComposerHashtagDecorator* _lazy_hashtagDecorator;
	UITextView* _textView;
	id<FBComposerCommittedMentionsProvider> _mentionsProvider;
	NSArray* _hashtags;

}

@property (nonatomic,retain) FBComposerHashtagDecorator * hashtagDecorator;                                //@synthesize lazy_hashtagDecorator=_lazy_hashtagDecorator - In the implementation block
@property (nonatomic,copy) NSArray * hashtags;                                                             //@synthesize hashtags=_hashtags - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                                        //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<FBComposerCommittedMentionsProvider> mentionsProvider;              //@synthesize mentionsProvider=_mentionsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_textViewDidChange:(id)arg1 ;
-(FBComposerHashtagDecorator *)hashtagDecorator;
-(void)setMentionsProvider:(id<FBComposerCommittedMentionsProvider>)arg1 ;
-(void)setHashtags:(NSArray *)arg1 ;
-(void)hashtagDecoratorHashtagsDidChange:(id)arg1 ;
-(void)hashtagDecoratorPublishableHashtagsDidChange:(id)arg1 ;
-(void)setHashtagDecorator:(FBComposerHashtagDecorator *)arg1 ;
-(id<FBComposerCommittedMentionsProvider>)mentionsProvider;
-(NSArray *)hashtags;
-(void)dealloc;
-(void)reset;
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
@end
