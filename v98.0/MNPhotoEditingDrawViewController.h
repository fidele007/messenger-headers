/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNPhotoEditingDrawViewDelegate.h>
#import <Messenger/FBDrawViewControllerDelegate.h>

@class MNPhotoEditingDrawView, UIView, UIImage, FBDrawViewController, NSString;

@interface MNPhotoEditingDrawViewController : UIViewController <MNPhotoEditingDrawViewDelegate, FBDrawViewControllerDelegate> {

	MNPhotoEditingDrawView* _photoEditingDrawView;
	UIView* _originalMediaView;
	UIImage* _editOverlayImage;
	FBDrawViewController* _drawViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasAddedDrawing;
-(void)setShowControls:(BOOL)arg1 ;
-(void)drawViewController:(id)arg1 didChooseColor:(id)arg2 ;
-(void)drawViewControllerDidChangeUndoState:(id)arg1 ;
-(void)drawViewControllerDidStartDrawing:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)drawViewControllerDidFinishDrawing:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)photoEditingDrawViewDidTapUndo:(id)arg1 ;
-(void)_updateUndoButtonVisibility;
-(id)_mergeOldEdit:(id)arg1 newEdit:(id)arg2 size:(CGSize)arg3 ;
-(id)initWithOriginalMediaView:(id)arg1 initialDrawEdit:(id)arg2 ;
-(id)drawEdit;
-(void)loadView;
@end

