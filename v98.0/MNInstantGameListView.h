/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
