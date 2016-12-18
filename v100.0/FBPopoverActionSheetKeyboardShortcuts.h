/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBKeyCommandSource.h>

@class FBKeyCommandHandler, NSArray, FBActionSheetContentView, NSString;

@interface FBPopoverActionSheetKeyboardShortcuts : NSObject <FBKeyCommandSource> {

	FBKeyCommandHandler* _keyCommandHandler;
	NSArray* _keyCommands;
	unsigned long long _selectedItemIndex;
	BOOL _isRegistered;
	FBActionSheetContentView* _contentView;

}

@property (nonatomic,retain) FBActionSheetContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fb_keyCommands;
-(void)_initializeKeyCommands;
-(void)unregisterKeyboardShortcuts;
-(void)_updateSelectedHighlightedItemFromIndex:(unsigned long long)arg1 ;
-(void)_downArrowKeyPressed;
-(void)_upArrowKeyPressed;
-(void)_enterKeyPressed;
-(void)registerKeyboardShortcuts;
-(void)dealloc;
-(id)init;
-(FBActionSheetContentView *)contentView;
-(void)setContentView:(FBActionSheetContentView *)arg1 ;
@end
