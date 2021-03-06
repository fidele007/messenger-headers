/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol MNThreadMutePickerDelegate;
@class NSArray, UIActionSheet, NSString;

@interface MNThreadMutePicker : NSObject <UIActionSheetDelegate> {

	NSArray* _threadMuteOptions;
	BOOL _isCurrentlyMuted;
	id<MNThreadMutePickerDelegate> _delegate;
	UIActionSheet* _actionSheet;

}

@property (assign,nonatomic) BOOL isCurrentlyMuted;                                       //@synthesize isCurrentlyMuted=_isCurrentlyMuted - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                                 //@synthesize actionSheet=_actionSheet - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadMutePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 isCurrentlyMuted:(BOOL)arg3 ;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 muteStatus:(long long)arg3 ;
-(BOOL)isCurrentlyMuted;
-(void)setIsCurrentlyMuted:(BOOL)arg1 ;
-(UIActionSheet *)actionSheet;
-(void)setDelegate:(id<MNThreadMutePickerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNThreadMutePickerDelegate>)delegate;
-(BOOL)isVisible;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

