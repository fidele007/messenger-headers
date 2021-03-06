/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNMontageComposerPreviewViewDelegate.h>

@protocol MNMontageComposerPreviewViewControllerDelegate;
@class MNMontageComposerPreviewStateListenerAnnouncer, NSString, MNMontageComposerContent;

@interface MNMontageComposerPreviewViewController : UIViewController <MNMontageComposerPreviewViewDelegate> {

	MNMontageComposerPreviewStateListenerAnnouncer* _previewStateAnnouncer;
	BOOL _isVisible;
	NSString* _mediaSendSourceSuffix;
	id<MNMontageComposerPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isVisible;                                                                  //@synthesize isVisible=_isVisible - In the implementation block
@property (nonatomic,copy) MNMontageComposerContent * content; 
@property (assign,nonatomic) BOOL isMuted; 
@property (nonatomic,copy) NSString * mediaSendSourceSuffix;                                                  //@synthesize mediaSendSourceSuffix=_mediaSendSourceSuffix - In the implementation block
@property (assign,nonatomic,__weak) id<MNMontageComposerPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addComposerPreviewStateListener:(id)arg1 ;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)montageComposerPreviewViewDidTapEmptySpace:(id)arg1 ;
-(void)_updatePreviewView;
-(NSString *)mediaSendSourceSuffix;
-(void)setMediaSendSourceSuffix:(NSString *)arg1 ;
-(void)setDelegate:(id<MNMontageComposerPreviewViewControllerDelegate>)arg1 ;
-(id<MNMontageComposerPreviewViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isVisible;
-(MNMontageComposerContent *)content;
-(void)setContent:(MNMontageComposerContent *)arg1 ;
-(BOOL)isMuted;
-(id)previewView;
-(void)setIsMuted:(BOOL)arg1 ;
@end

