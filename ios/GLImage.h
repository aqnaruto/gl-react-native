
#import "RCTBridge.h"
#import "GLTexture.h"
#import "RCTImageSource.h"

@interface GLImage: NSObject

@property (nonatomic, copy) RCTImageSource *source;
@property (nonatomic) UIImage *image;


- (instancetype)initWithBridge:(RCTBridge *)bridge withOnLoad:(void (^)(void))onload NS_DESIGNATED_INITIALIZER;

- (GLTexture *) getTexture;

@end
