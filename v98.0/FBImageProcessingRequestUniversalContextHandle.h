/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBImageProcessingSubPipeDelegate.h>

@class NSString;

@interface FBImageProcessingRequestUniversalContextHandle : NSObject <FBImageProcessingSubPipeDelegate> {

	BOOL _pruneOldestFirst;
	BOOL _prioritizeNewRequestsWhenSorting;

}

@property (assign,nonatomic) BOOL pruneOldestFirst;                              //@synthesize pruneOldestFirst=_pruneOldestFirst - In the implementation block
@property (assign,nonatomic) BOOL prioritizeNewRequestsWhenSorting;              //@synthesize prioritizeNewRequestsWhenSorting=_prioritizeNewRequestsWhenSorting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPrioritizeNewRequestsWhenSorting:(BOOL)arg1 ;
-(void)imageProcessingSubPipe:(id)arg1 willProcessRequests:(id)arg2 needSort:(BOOL)arg3 ;
-(void)imageProcessingSubPipe:(id)arg1 willPruneOrderedProcessRequests:(id)arg2 ;
-(BOOL)pruneOldestFirst;
-(void)setPruneOldestFirst:(BOOL)arg1 ;
-(BOOL)prioritizeNewRequestsWhenSorting;
@end
