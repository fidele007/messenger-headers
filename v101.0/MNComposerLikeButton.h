/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNComposerActionButton.h>
#import <Messenger/MNLikePressing.h>

@class MNLikePressingListenerAnnouncer, NSString;

@interface MNComposerLikeButton : MNComposerActionButton <MNLikePressing> {

	MNLikePressingListenerAnnouncer* _likePressingAnnouncer;
	BOOL _hasDeepPressed;
	NSString* _customLikeEmoji;
	double _customLikeEmojiFontSize;

}

@property (nonatomic,copy) NSString * customLikeEmoji;                    //@synthesize customLikeEmoji=_customLikeEmoji - In the implementation block
@property (assign,nonatomic) double customLikeEmojiFontSize;              //@synthesize customLikeEmojiFontSize=_customLikeEmojiFontSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)customLikeEmoji;
-(void)setCustomLikeEmoji:(NSString *)arg1 ;
-(double)customLikeEmojiFontSize;
-(void)setCustomLikeEmojiFontSize:(double)arg1 ;
-(id)likeSourceName;
-(void)addLikePressingListener:(id)arg1 ;
-(void)_updateCustomLikeEmoji;
-(BOOL)_canDeepPress;
-(void)_updateCustomLikeEmojiUnsafe;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end

