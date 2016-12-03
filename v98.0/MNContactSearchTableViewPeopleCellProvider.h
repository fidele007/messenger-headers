/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNContactSearchTableViewCellProviding.h>

@protocol MNContactSearchPeopleCellActionButtonControlling;
@class MNContactSearchTableViewPeopleCellProviderInjector, MNPeopleCellStyle, NSMutableArray, NSString;

@interface MNContactSearchTableViewPeopleCellProvider : NSObject <FBClassInjectable, MNContactSearchTableViewCellProviding> {

	MNContactSearchTableViewPeopleCellProviderInjector* _injector;
	id<MNContactSearchPeopleCellActionButtonControlling> _actionButtonController;
	MNPeopleCellStyle* _style;
	NSMutableArray* _delegateForwarders;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(id)initWithInjector:(id)arg1 actionButtonController:(id)arg2 ;
-(id)reuseIdentifierForResult:(id)arg1 withData:(id)arg2 ;
-(id)newCellWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 forDisplayingResult:(id)arg2 inSection:(id)arg3 withData:(id)arg4 ;
-(double)heightForCellDisplayingResult:(id)arg1 withData:(id)arg2 ;
-(id)_viewModelForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)_conversationContactForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)_mainLabelTextForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)_detailLabelTextForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)_threadDisplayNameForSummary:(id)arg1 userSet:(id)arg2 ;
-(id)_detailLabelTextForUser:(id)arg1 metadata:(id)arg2 ;
-(id)_participantsListForGroupThreadSummary:(id)arg1 userSet:(id)arg2 ;
@end

