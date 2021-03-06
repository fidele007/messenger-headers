/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerAutoCollapseMonitorDelegate;
#import <Messenger/Messenger-Structs.h>
@class FBTimer;

@interface MNComposerAutoCollapseMonitor : NSObject {

	long long _composerBarMode;
	BOOL _editing;
	BOOL _empty;
	BOOL _invalid;
	BOOL _scrolling;
	BOOL _selected;
	double _timeoutStartTime;
	FBTimer* _timer;
	id<MNComposerAutoCollapseMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNComposerAutoCollapseMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_checkTimeout;
-(void)_updateFlag:(BOOL*)arg1 value:(BOOL)arg2 ;
-(void)resetTimeout;
-(void)updateWithComposerBarMode:(long long)arg1 ;
-(void)updateWithTextLength:(unsigned long long)arg1 ;
-(void)textViewDidBeginEditing;
-(void)textViewDidEndEditing;
-(void)textViewDidBeginScrolling;
-(void)textViewDidEndScrolling;
-(void)setDelegate:(id<MNComposerAutoCollapseMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MNComposerAutoCollapseMonitorDelegate>)delegate;
-(void)invalidate;
-(BOOL)_isEnabled;
-(void)textViewDidChangeSelection:(NSRange)arg1 ;
-(void)_updateTimer;
@end

