/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNPhotosDataSourceUpdateListener.h>

@protocol MNPhotosDataSource, MNMontageAlbumListViewControllerDelegate;
@class UITableView, NSString;

@interface MNMontageAlbumListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNPhotosDataSourceUpdateListener> {

	UITableView* _albumListTableView;
	id<MNPhotosDataSource> _photosDataSource;
	id<MNMontageAlbumListViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontageAlbumListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)photosDataSourceDidUpdateWithChangeInstance:(id)arg1 ;
-(void)photosDataSourceDidFinishLoadingDefaultAlbum;
-(id)_albumAtIndexPath:(id)arg1 ;
-(void)setDelegate:(id<MNMontageAlbumListViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MNMontageAlbumListViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithPhotosDataSource:(id)arg1 ;
@end

