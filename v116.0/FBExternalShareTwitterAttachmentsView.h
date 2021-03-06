/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBExternalShareTwitterAttachmentsSelectViewControllerDelegate.h>

@protocol FBExternalShareTwitterAttachmentsViewDelegate;
@class NSMutableArray, NSMutableDictionary, FBUserSession, NSMutableOrderedSet, FBExternalShareTwitterAttachmentsSelectViewController, NSString;

@interface FBExternalShareTwitterAttachmentsView : UIView <FBExternalShareTwitterAttachmentsSelectViewControllerDelegate> {

	NSMutableArray* _attachments;
	NSMutableDictionary* _images;
	NSMutableArray* _selectedIndices;
	double _width;
	FBUserSession* _session;
	NSMutableDictionary* _indexToImageIDLookup;
	NSMutableOrderedSet* _imageIDs;
	FBExternalShareTwitterAttachmentsSelectViewController* _selectVC;
	BOOL _loadingSelectionVC;
	id<FBExternalShareTwitterAttachmentsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBExternalShareTwitterAttachmentsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWidth:(double)arg1 story:(id)arg2 session:(id)arg3 ;
-(void)updateSelectedIndices:(id)arg1 ;
-(id)_getAttachmentView:(id)arg1 ;
-(void)_didTapImage:(id)arg1 ;
-(void)_didTapRemoveImage:(id)arg1 ;
-(id)attachmentIDs;
-(id)attachmentIDsForSharing;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBExternalShareTwitterAttachmentsViewDelegate>)arg1 ;
-(id<FBExternalShareTwitterAttachmentsViewDelegate>)delegate;
-(void)_addAttachment:(id)arg1 ;
@end

