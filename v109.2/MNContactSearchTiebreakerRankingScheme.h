/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:45 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactSearchResultRanking.h>

@protocol MNContactSearchResultRanking;
@interface MNContactSearchTiebreakerRankingScheme : NSObject <MNContactSearchResultRanking> {

	id<MNContactSearchResultRanking> _mainRankingScheme;
	id<MNContactSearchResultRanking> _tiebreakerRankingScheme;

}
-(long long)compareResult:(id)arg1 toResult:(id)arg2 preppedDataSet:(id)arg3 ;
-(id)initWithMainRankingScheme:(id)arg1 tiebreaker:(id)arg2 ;
@end

