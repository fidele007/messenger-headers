/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMediaCreativeToolBaseViewController.h>
#import <Messenger/FBMediaCreativeToolbarDelegate.h>

@class FBMediaCreativeToolbar, NSArray, NSString;

@interface FBMediaCreativeToolAdjustmentViewController : FBMediaCreativeToolBaseViewController <FBMediaCreativeToolbarDelegate> {

	FBMediaCreativeToolbar* _toolbar;
	NSArray* _cellModels;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creativeToolKey;
+(id)_logName;
-(void)_clearAdjustments;
-(void)_didTapToolAtIndexPath:(id)arg1 toSelectItem:(BOOL)arg2 ;
-(void)_enable:(BOOL)arg1 rotationAction:(long long)arg2 atIndexPath:(id)arg3 ;
-(void)_removeFilterConfigAtIndexPath:(id)arg1 ;
-(void)_insertFilterConfig:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_logRotationActionAtIndex:(unsigned long long)arg1 isApplied:(BOOL)arg2 ;
-(void)_updateCellWithNewCellModelAtIndexPath:(id)arg1 isEnabled:(BOOL)arg2 ;
-(id)_cellIconURLForRotationAction:(long long)arg1 isEnabled:(BOOL)arg2 ;
-(BOOL)_isItemEnabledAtIndex:(unsigned long long)arg1 ;
-(id)_cellModelWithTitle:(id)arg1 iconURL:(id)arg2 ;
-(id)_createCollectionViewData;
-(void)mediaCreativeToolsBaseView:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)mediaCreativeToolsBaseView:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_refreshToolbarButtonStates;
-(void)mediaCreativeToolbar:(id)arg1 selectedButtonAtIndex:(unsigned long long)arg2 ;
-(id)creativeToolTitle;
-(unsigned long long)glyphSize;
-(id)creativeToolbar;
-(unsigned long long)glyphName;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

