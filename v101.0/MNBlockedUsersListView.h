/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol UITableViewDelegate, UITableViewDataSource;
@class UITableView, MNLoadingView;

@interface MNBlockedUsersListView : UIView {

	UITableView* _tableView;
	MNLoadingView* _loadingView;
	id<UITableViewDelegate> _tableViewDelegate;
	id<UITableViewDataSource> _tableViewDataSource;

}

@property (assign,nonatomic,__weak) id<UITableViewDelegate> tableViewDelegate;                  //@synthesize tableViewDelegate=_tableViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UITableViewDataSource> tableViewDataSource;              //@synthesize tableViewDataSource=_tableViewDataSource - In the implementation block
-(id<UITableViewDelegate>)tableViewDelegate;
-(id<UITableViewDataSource>)tableViewDataSource;
-(void)setTableViewDataSource:(id<UITableViewDataSource>)arg1 ;
-(void)setTableViewDelegate:(id<UITableViewDelegate>)arg1 ;
-(void)hideLoader;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)deleteRowAtIndexPath:(id)arg1 ;
@end

