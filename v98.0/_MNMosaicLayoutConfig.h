/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray, NSSet;

@interface _MNMosaicLayoutConfig : NSObject {

	NSArray* _offsets;
	NSSet* _bigCellStyleIndexes;
	NSSet* _wideCellStyleIndexes;
	double _defaultCellSize;
	double _bigCellSize;
	double _wideCellSize;
	/*^block*/id _cellStyleIndexBlock;

}
+(id)configWithContentWidth:(double)arg1 spacing:(double)arg2 ;
-(CGRect)frameForCellWithPreviousOffset:(CGPoint)arg1 index:(unsigned long long)arg2 isPortrait:(BOOL)arg3 ;
-(id)initWithOffsets:(id)arg1 bigCellStyleIndexes:(id)arg2 wideCellStyleIndexes:(id)arg3 defaultCellSize:(double)arg4 bigCellSize:(double)arg5 wideCellSize:(double)arg6 cellStyleIndexBlock:(/*^block*/id)arg7 ;
@end

