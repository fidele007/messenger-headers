/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, IGContext, IGFilter;

@interface IGRenderer : NSObject {

	NSMutableArray* _outputs;
	IGContext* _context;
	IGFilter* _filter;

}

@property (nonatomic,readonly) IGContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) IGFilter * filter;                  //@synthesize filter=_filter - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(id)renderByConsumingSource:(id)arg1 ;
-(void)renderTo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
-(IGContext *)context;
-(void)setFilter:(IGFilter *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(void)render;
-(IGFilter *)filter;
-(void)render:(id)arg1 ;
@end

