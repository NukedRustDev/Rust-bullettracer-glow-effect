
if (projectile->isAuthoritative() && vars::debug::bullettracer) {

                DDraw::Line(projectile->currentPosition(), lineposition, Color(vars::colors::bullet_tracer[0] * 255, vars::colors::bullet_tracer[1] * 255, vars::colors::bullet_tracer[2] * 255 , 255), 0.9f,false ,false);
            }