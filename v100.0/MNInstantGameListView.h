/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UITableView, MNLoadingView, MNErrorToastView;

@interface MNInstantGameListView : UIView {

	UITableView* _tableView;
	MNLoadingView* _loadingView;
	MNErrorToastView* _toastView;

}

@property (nonatomic,readonly) UITableView * tableView;                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) MNLoadingView * loadingView;               //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,readonly) MNErrorToastView * toastView;              //@synthesize toastView=_toastView - In the implementation block
-(MNErrorToastView *)toastView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UITableView *)tableView;
-(MNLoadingView *)loadingView;
@end

