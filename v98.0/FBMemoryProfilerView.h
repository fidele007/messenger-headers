/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSDictionary, UILabel, UITableView, FBMemoryProfilerTextField, FBMemoryProfilerSegmentedControl, UIButton;

@interface FBMemoryProfilerView : UIView {

	NSDictionary* _attributes;
	UILabel* _residentMemory;
	UITableView* _tableView;
	FBMemoryProfilerTextField* _subwordFilter;
	FBMemoryProfilerSegmentedControl* _sortControl;
	UIButton* _hideButton;
	UIButton* _markGenerationButton;

}

@property (nonatomic,readonly) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) FBMemoryProfilerTextField * subwordFilter;                   //@synthesize subwordFilter=_subwordFilter - In the implementation block
@property (nonatomic,readonly) FBMemoryProfilerSegmentedControl * sortControl;              //@synthesize sortControl=_sortControl - In the implementation block
@property (nonatomic,readonly) UIButton * hideButton;                                       //@synthesize hideButton=_hideButton - In the implementation block
@property (nonatomic,readonly) UIButton * markGenerationButton;                             //@synthesize markGenerationButton=_markGenerationButton - In the implementation block
-(void)setResidentMemory:(id)arg1 ;
-(FBMemoryProfilerTextField *)subwordFilter;
-(FBMemoryProfilerSegmentedControl *)sortControl;
-(UIButton *)hideButton;
-(UIButton *)markGenerationButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
@end

