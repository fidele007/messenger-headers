/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAnalytics;

@interface MNComposerTriggersLogger : NSObject {

	FBAnalytics* _analytics;

}
-(void)_logEvent:(id)arg1 ;
-(void)_logEvent:(id)arg1 extra:(id)arg2 ;
-(void)didTapContentSearchButton:(id)arg1 ;
-(void)didDismissContentSearch;
-(void)didSendContent:(id)arg1 atIndex:(unsigned long long)arg2 query:(id)arg3 ;
-(void)didTypeUnderSearchMode:(id)arg1 ;
-(void)didLoadNumberOfContents:(unsigned long long)arg1 elapsedTime:(double)arg2 ;
-(void)didCollapseSearchWithNumberofLoadedContents:(unsigned long long)arg1 ;
-(void)didLoadContentAppID:(id)arg1 numberOfBytes:(unsigned long long)arg2 elapsedTime:(double)arg3 ;
-(void)didLoadFirstPageWithElapsedTime:(double)arg1 ;
-(id)init;
@end

