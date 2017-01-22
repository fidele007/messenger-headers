/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBUIConfigurable.h>

@class FBGridViewDataSource, UICollectionView, NSString;

@interface FBGridView : UIView <FBUIConfigurable> {

	FBGridViewDataSource* _dataSource;
	UICollectionView* _collectionView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(id)newWithDelegate:(id)arg1 layoutType:(unsigned long long)arg2 ;
+(id)newWithDelegate:(id)arg1 layoutType:(unsigned long long)arg2 scrollsToTop:(BOOL)arg3 scrollEnabled:(BOOL)arg4 ;
+(id)defaultFBUIConfig;
+(id)newWithDelegate:(id)arg1 layoutType:(unsigned long long)arg2 scrollsToTop:(BOOL)arg3 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)dealloc;
-(void)reloadData;
-(void)layoutSubviews;
-(id)_init;
-(id)config;
-(void)applyConfig:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
@end
