/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, FBObjectGraphConfiguration;

@interface FBRetainCycleDetector : NSObject {

	NSMutableArray* _candidates;
	FBObjectGraphConfiguration* _configuration;

}
-(id)findRetainCyclesWithMaxCycleLength:(unsigned long long)arg1 ;
-(id)_findRetainCyclesInObject:(id)arg1 stackDepth:(unsigned long long)arg2 ;
-(id)_unwrapCycle:(id)arg1 ;
-(id)_shiftToUnifiedCycle:(id)arg1 ;
-(id)_shiftBufferToLowestAddress:(id)arg1 ;
-(id)_shiftToLowestLexicographically:(id)arg1 ;
-(id)_extractClassNamesFromGraphObjects:(id)arg1 ;
-(long long)_compareStringArray:(id)arg1 withArray:(id)arg2 ;
-(id)findRetainCycles;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(void)addCandidate:(id)arg1 ;
@end

