/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBLazyInitializing.h>

@class NSString;

@interface MNMessageTextDataDetector : NSObject <FBViewerContextClassProvidable, FBLazyInitializing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)detectDataInString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)prepareLazyState;
-(id)_detectDataInString:(id)arg1 withEvaluatorSet:(id)arg2 ;
-(id)_detectBuiltInDataTypesInString:(id)arg1 withEvaluatorSet:(id)arg2 ;
-(id)_detectCurrencyAmountsInString:(id)arg1 withEvaluatorSet:(id)arg2 excludingResultsInIndexSetOfRanges:(id)arg3 ;
-(id)_detectInternalToolCommandsInString:(id)arg1 withEvaluatorSet:(id)arg2 excludingResultsInIndexSetOfRanges:(id)arg3 ;
-(id)detectDataInString:(id)arg1 ;
@end
