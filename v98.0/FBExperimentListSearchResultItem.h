/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexPath;

@interface FBExperimentListSearchResultItem : NSObject {

	NSString* _searchResultName;
	NSIndexPath* _atIndexPath;

}

@property (nonatomic,copy,readonly) NSString * searchResultName;              //@synthesize searchResultName=_searchResultName - In the implementation block
@property (nonatomic,readonly) NSIndexPath * atIndexPath;                     //@synthesize atIndexPath=_atIndexPath - In the implementation block
+(id)createSearchResultItemName:(id)arg1 indexPath:(id)arg2 ;
-(NSString *)searchResultName;
-(NSIndexPath *)atIndexPath;
-(id)initWithSearchResultName:(id)arg1 indexPath:(id)arg2 ;
@end

